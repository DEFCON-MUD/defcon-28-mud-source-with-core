inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 9, 7 }));
  set_short( "Hallway - x37y9z7" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y10z7.c",
  "south" : DIR+"/rooms/x37y8z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
