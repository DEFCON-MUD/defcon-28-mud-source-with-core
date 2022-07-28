inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 28, 9 }));
  set_short( "Hallway - x36y28z9" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y28z9.c",
  "east" : DIR+"/rooms/x37y28z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
