inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 44, 8 }));
  set_short( "Hallway - x31y44z8" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y44z8.c",
  "south" : DIR+"/rooms/x31y43z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
