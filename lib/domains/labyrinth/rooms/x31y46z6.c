inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 46, 6 }));
  set_short( "Passage - x31y46z6" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y46z6.c",
  "south" : DIR+"/rooms/x31y45z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
