inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 47, 5 }));
  set_short( "Passage - x31y47z5" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y48z5.c",
  "south" : DIR+"/rooms/x31y46z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
