inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 34, 4 }));
  set_short( "Hallway - x48y34z4" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y34z4.c",
  "east" : DIR+"/rooms/x49y34z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
