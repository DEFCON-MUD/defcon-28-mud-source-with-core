inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 34, 6 }));
  set_short( "Hallway - x46y34z6" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y34z6.c",
  "east" : DIR+"/rooms/x47y34z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
