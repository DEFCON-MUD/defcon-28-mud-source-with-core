inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 35, 4 }));
  set_short( "Corridor - x13y35z4" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y36z4.c",
  "south" : DIR+"/rooms/x13y34z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
