inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 52, 9 }));
  set_short( "Corridor - x32y52z9" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y52z9.c",
  "east" : DIR+"/rooms/x33y52z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
