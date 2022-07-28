inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 6 }));
  set_short( "Hallway - x35y16z6" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y16z6.c",
  "north" : DIR+"/rooms/x35y17z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
