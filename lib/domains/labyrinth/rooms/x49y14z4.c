inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 4 }));
  set_short( "Hallway - x49y14z4" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y14z4.c",
  "south" : DIR+"/rooms/x49y13z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
