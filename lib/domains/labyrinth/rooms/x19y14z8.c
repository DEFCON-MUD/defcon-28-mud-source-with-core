inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 14, 8 }));
  set_short( "Corridor - x19y14z8" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y14z8.c",
  "north" : DIR+"/rooms/x19y15z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
