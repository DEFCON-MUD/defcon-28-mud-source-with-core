inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 16, 1 }));
  set_short( "Corridor - x19y16z1" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y17z1.c",
  "south" : DIR+"/rooms/x19y15z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
