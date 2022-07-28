inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 24, 6 }));
  set_short( "Passage - x48y24z6" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y24z6.c",
  "east" : DIR+"/rooms/x49y24z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
