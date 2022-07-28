inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 34, 0 }));
  set_short( "Passage - x13y34z0" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y34z0.c",
  "east" : DIR+"/rooms/x14y34z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
