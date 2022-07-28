inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 4 }));
  set_short( "Hallway - x51y24z4" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y25z4.c",
  "south" : DIR+"/rooms/x51y23z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
