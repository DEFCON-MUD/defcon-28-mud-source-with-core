inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 44, 2 }));
  set_short( "Hallway - x13y44z2" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y44z2.c",
  "north" : DIR+"/rooms/x13y45z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
