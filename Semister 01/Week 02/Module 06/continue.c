#include<stdio.h>
int main(){
    for(int i=150; i<=250;i++){
        
        if(i%2==0 && i%3==0 && i%5==0){
            printf("is the numder %d\n", i);
            continue;
        }
        printf("%d checking\n",i);
    }
}

/*output
is the numder 150
151 checking
152 checking
153 checking
154 checking
155 checking
156 checking
157 checking
158 checking
159 checking
160 checking
161 checking
162 checking
163 checking
164 checking
165 checking
166 checking
167 checking
168 checking
169 checking
170 checking
171 checking
172 checking
173 checking
174 checking
175 checking
176 checking
177 checking
178 checking
179 checking
is the numder 180
181 checking
182 checking
183 checking
184 checking
185 checking
186 checking
187 checking
188 checking
189 checking
190 checking
191 checking
192 checking
193 checking
194 checking
195 checking
196 checking
197 checking
198 checking
199 checking
200 checking
201 checking
202 checking
203 checking
204 checking
205 checking
206 checking
207 checking
208 checking
209 checking
is the numder 210
211 checking
212 checking
213 checking
214 checking
215 checking
216 checking
217 checking
218 checking
219 checking
220 checking
221 checking
222 checking
223 checking
224 checking
225 checking
226 checking
227 checking
228 checking
229 checking
230 checking
231 checking
232 checking
233 checking
234 checking
235 checking
236 checking
237 checking
238 checking
239 checking
is the numder 240
241 checking
242 checking
243 checking
244 checking
245 checking
246 checking
247 checking
248 checking
249 checking
250 checking

*/