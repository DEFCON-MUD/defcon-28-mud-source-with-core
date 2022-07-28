inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 17, 1 }));
  set_short( "Passage - x53y17z1" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y18z1.c",
  "south" : DIR+"/rooms/x53y16z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
