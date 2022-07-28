inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 14, 4 }));
  set_short( "Hallway - x19y14z4" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y14z4.c",
  "north" : DIR+"/rooms/x19y15z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
