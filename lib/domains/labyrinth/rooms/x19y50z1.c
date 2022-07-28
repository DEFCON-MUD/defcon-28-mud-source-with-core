inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 1 }));
  set_short( "Passage - x19y50z1" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y50z1.c",
  "north" : DIR+"/rooms/x19y51z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
