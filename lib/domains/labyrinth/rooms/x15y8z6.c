inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 8, 6 }));
  set_short( "Corridor - x15y8z6" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y8z6.c",
  "south" : DIR+"/rooms/x15y7z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
