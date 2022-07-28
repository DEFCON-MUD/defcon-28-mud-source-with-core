inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 35, 7 }));
  set_short( "Corridor - x15y35z7" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y36z7.c",
  "south" : DIR+"/rooms/x15y34z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
