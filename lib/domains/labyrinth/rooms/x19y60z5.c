inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 60, 5 }));
  set_short( "Hallway - x19y60z5" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y60z5.c",
  "south" : DIR+"/rooms/x19y59z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
