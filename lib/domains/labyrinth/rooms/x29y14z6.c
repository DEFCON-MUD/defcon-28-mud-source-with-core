inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 14, 6 }));
  set_short( "Corridor - x29y14z6" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y14z6.c",
  "south" : DIR+"/rooms/x29y13z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
