inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 2 }));
  set_short( "Passage - x3y48z2" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y49z2.c",
  "south" : DIR+"/rooms/x3y47z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
