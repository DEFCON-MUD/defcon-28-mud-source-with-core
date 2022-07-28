inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 43, 4 }));
  set_short( "Hallway - x47y43z4" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y44z4.c",
  "south" : DIR+"/rooms/x47y42z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
