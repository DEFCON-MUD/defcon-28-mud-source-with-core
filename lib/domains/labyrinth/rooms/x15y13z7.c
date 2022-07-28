inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 13, 7 }));
  set_short( "Corridor - x15y13z7" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y14z7.c",
  "south" : DIR+"/rooms/x15y12z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
