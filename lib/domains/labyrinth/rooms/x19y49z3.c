inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 49, 3 }));
  set_short( "Hallway - x19y49z3" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y50z3.c",
  "south" : DIR+"/rooms/x19y48z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
