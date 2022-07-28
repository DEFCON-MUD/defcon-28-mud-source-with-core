inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 20, 8 }));
  set_short( "Hallway - x55y20z8" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y20z8.c",
  "east" : DIR+"/rooms/x56y20z8.c",
  "south" : DIR+"/rooms/x55y19z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
