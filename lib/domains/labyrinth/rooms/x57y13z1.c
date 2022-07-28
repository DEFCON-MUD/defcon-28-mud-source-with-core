inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 13, 1 }));
  set_short( "Hallway - x57y13z1" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y14z1.c",
  "south" : DIR+"/rooms/x57y12z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
