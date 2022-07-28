inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 2 }));
  set_short( "Hallway - x1y61z2" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z2.c",
  "south" : DIR+"/rooms/x1y60z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
