inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 9 }));
  set_short( "Hallway - x49y50z9" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y50z9.c",
  "north" : DIR+"/rooms/x49y51z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
