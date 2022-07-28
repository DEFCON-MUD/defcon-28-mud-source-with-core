inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 45, 0 }));
  set_short( "Corridor - x35y45z0" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y46z0.c",
  "south" : DIR+"/rooms/x35y44z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
