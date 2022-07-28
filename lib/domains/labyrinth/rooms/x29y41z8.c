inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 41, 8 }));
  set_short( "Passage - x29y41z8" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y42z8.c",
  "south" : DIR+"/rooms/x29y40z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
