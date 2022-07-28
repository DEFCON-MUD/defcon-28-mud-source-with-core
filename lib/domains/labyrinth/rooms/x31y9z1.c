inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 9, 1 }));
  set_short( "Passage - x31y9z1" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y10z1.c",
  "south" : DIR+"/rooms/x31y8z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
