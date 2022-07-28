inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 0, 5 }));
  set_short( "Corridor - x22y0z5" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y0z5.c",
  "east" : DIR+"/rooms/x23y0z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
