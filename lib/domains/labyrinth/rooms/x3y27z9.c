inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 27, 9 }));
  set_short( "Hallway - x3y27z9" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y28z9.c",
  "south" : DIR+"/rooms/x3y26z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
