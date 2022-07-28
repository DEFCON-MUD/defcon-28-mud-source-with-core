inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 9 }));
  set_short( "Hallway - x21y38z9" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y39z9.c",
  "south" : DIR+"/rooms/x21y37z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
