inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 23, 6 }));
  set_short( "Hallway - x3y23z6" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y24z6.c",
  "south" : DIR+"/rooms/x3y22z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
