inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 12, 7 }));
  set_short( "Hallway - x43y12z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y13z7.c",
  "south" : DIR+"/rooms/x43y11z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
