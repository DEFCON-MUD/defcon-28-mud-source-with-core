inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 30, 6 }));
  set_short( "Hallway - x35y30z6" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y30z6.c",
  "north" : DIR+"/rooms/x35y31z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
