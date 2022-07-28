inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 18, 6 }));
  set_short( "Hallway - x15y18z6" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y18z6.c",
  "east" : DIR+"/rooms/x16y18z6.c",
  "south" : DIR+"/rooms/x15y17z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
