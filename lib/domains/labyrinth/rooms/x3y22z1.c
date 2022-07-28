inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 1 }));
  set_short( "Corridor - x3y22z1" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y23z1.c",
  "south" : DIR+"/rooms/x3y21z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
