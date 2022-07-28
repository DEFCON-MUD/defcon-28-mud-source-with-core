inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 51, 8 }));
  set_short( "Hallway - x13y51z8" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y52z8.c",
  "south" : DIR+"/rooms/x13y50z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
