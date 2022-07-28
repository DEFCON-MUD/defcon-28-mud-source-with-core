inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 32, 1 }));
  set_short( "Hallway - x19y32z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y33z1.c",
  "south" : DIR+"/rooms/x19y31z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
