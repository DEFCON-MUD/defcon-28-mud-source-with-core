inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 2, 2 }));
  set_short( "Hallway - x36y2z2" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y2z2.c",
  "east" : DIR+"/rooms/x37y2z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
