inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 8 }));
  set_short( "Hallway - x17y4z8" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y4z8.c",
  "south" : DIR+"/rooms/x17y3z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
