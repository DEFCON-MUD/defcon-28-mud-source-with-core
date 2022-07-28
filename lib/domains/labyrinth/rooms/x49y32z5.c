inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 32, 5 }));
  set_short( "Hallway - x49y32z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y32z5.c",
  "north" : DIR+"/rooms/x49y33z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
