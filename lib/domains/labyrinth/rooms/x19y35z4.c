inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 35, 4 }));
  set_short( "Hallway - x19y35z4" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y36z4.c",
  "south" : DIR+"/rooms/x19y34z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
