inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 14, 3 }));
  set_short( "Corridor - x35y14z3" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y15z3.c",
  "south" : DIR+"/rooms/x35y13z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
