inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 62, 1 }));
  set_short( "Passage - x17y62z1" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y62z1.c",
  "south" : DIR+"/rooms/x17y61z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
