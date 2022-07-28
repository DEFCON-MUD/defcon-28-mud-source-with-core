inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 53, 9 }));
  set_short( "Corridor - x55y53z9" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y54z9.c",
  "south" : DIR+"/rooms/x55y52z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
